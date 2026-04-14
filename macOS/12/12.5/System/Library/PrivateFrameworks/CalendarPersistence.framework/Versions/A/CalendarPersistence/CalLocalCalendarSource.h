@interface CalLocalCalendarSource : CalManagedSource {
    BOOL _isEditable;
}

- (BOOL)hasCapability:(int)a0;
- (void)setIsEditable:(BOOL)a0;

@end
