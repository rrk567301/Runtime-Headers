@interface NSWindowGraphicsContext : NSCGSContext {
    unsigned int _cgsWindowID;
}

- (id)initWithWindow:(id)a0;
- (id)attributes;
- (BOOL)isDrawingToScreen;
- (unsigned int)windowID;
- (id)_initWithWindowNumber:(long long)a0;

@end
