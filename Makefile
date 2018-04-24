.PHONY: clean All

All:
	@echo "----------Building project:[ BitExpansion - Debug ]----------"
	@cd "BitExpansion" && "$(MAKE)" -f  "BitExpansion.mk"
clean:
	@echo "----------Cleaning project:[ BitExpansion - Debug ]----------"
	@cd "BitExpansion" && "$(MAKE)" -f  "BitExpansion.mk" clean
