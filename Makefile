.PHONY: clean All

All:
	@echo "----------Building project:[ SignBoard - Debug ]----------"
	@cd "SignBoard" && "$(MAKE)" -f  "SignBoard.mk"
clean:
	@echo "----------Cleaning project:[ SignBoard - Debug ]----------"
	@cd "SignBoard" && "$(MAKE)" -f  "SignBoard.mk" clean
