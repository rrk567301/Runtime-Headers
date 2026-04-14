@interface NSWindowGraphicsContext : NSCGSContext {
    unsigned int _cgsWindowID;
}

- (id)attributes;
- (BOOL)isDrawingToScreen;
- (id)initWithWindow:(id)a0;
- (unsigned int)windowID;
- (id)_initWithWindowNumber:(long long)a0;

@end
