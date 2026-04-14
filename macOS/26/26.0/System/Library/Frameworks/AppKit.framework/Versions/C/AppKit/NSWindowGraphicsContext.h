@interface NSWindowGraphicsContext : NSCGSContext {
    unsigned int _cgsWindowID;
}

- (unsigned int)windowID;
- (BOOL)isDrawingToScreen;
- (id)initWithWindow:(id)a0;
- (id)attributes;
- (id)_initWithWindowNumber:(long long)a0;

@end
