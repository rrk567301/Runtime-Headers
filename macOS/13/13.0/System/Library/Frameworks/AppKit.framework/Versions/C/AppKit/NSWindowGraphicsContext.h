@interface NSWindowGraphicsContext : NSCGSContext {
    unsigned int _cgsWindowID;
}

- (id)attributes;
- (id)initWithWindow:(id)a0;
- (unsigned int)windowID;
- (BOOL)isDrawingToScreen;
- (id)_initWithWindowNumber:(long long)a0;

@end
