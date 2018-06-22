.PHONY: clean All

All:
	@echo "----------Building project:[ LCA - Debug ]----------"
	@cd "LCA" && "$(MAKE)" -f  "LCA.mk"
clean:
	@echo "----------Cleaning project:[ LCA - Debug ]----------"
	@cd "LCA" && "$(MAKE)" -f  "LCA.mk" clean
