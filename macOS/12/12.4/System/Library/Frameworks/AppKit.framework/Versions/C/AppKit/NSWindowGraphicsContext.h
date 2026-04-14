@interface NSWindowGraphicsContext : NSCGSContext {
    unsigned int _cgsWindowID;
}

- (id)attributes;
- (unsigned int)windowID;
- (id)initWithWindow:(id)a0;
- (BOOL)isDrawingToScreen;
- (id)_initWithWindowNumber:(long long)a0;

@end
