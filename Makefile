.PHONY: clean All

All:
	@echo "----------Building project:[ loop2 - Debug ]----------"
	@cd "loop2" && "$(MAKE)" -f  "loop2.mk"
clean:
	@echo "----------Cleaning project:[ loop2 - Debug ]----------"
	@cd "loop2" && "$(MAKE)" -f  "loop2.mk" clean
