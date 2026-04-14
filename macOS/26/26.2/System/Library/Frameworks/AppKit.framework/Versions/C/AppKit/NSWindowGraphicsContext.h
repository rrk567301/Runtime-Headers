@interface NSWindowGraphicsContext : NSCGSContext {
    unsigned int _cgsWindowID;
}

- (id)initWithWindow:(id)a0;
- (id)attributes;
- (unsigned int)windowID;
- (BOOL)isDrawingToScreen;
- (id)_initWithWindowNumber:(long long)a0;

@end
