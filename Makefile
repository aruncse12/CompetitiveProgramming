.PHONY: clean All

All:
	@echo "----------Building project:[ SubStringValidity - Debug ]----------"
	@cd "SubStringValidity" && "$(MAKE)" -f  "SubStringValidity.mk"
clean:
	@echo "----------Cleaning project:[ SubStringValidity - Debug ]----------"
	@cd "SubStringValidity" && "$(MAKE)" -f  "SubStringValidity.mk" clean
