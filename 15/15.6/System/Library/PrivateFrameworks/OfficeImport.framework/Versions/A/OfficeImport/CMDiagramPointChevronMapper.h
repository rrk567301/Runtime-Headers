@interface CMDiagramPointChevronMapper : CMDiagramPointMapper {
    char mPlaceholder;
    char mHomePlate;
}

- (void)setIsPlaceholder:(char)a0;
- (void)setIsHomePlate:(char)a0;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
