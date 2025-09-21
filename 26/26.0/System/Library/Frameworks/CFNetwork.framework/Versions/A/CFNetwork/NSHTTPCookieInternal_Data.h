@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal {
    struct CompactHTTPCookieWithData { void /* function */ **x0; char *x1; } *_fromData;
}

- (id)_initWithHeader:(const struct CompactCookieHeader { } *)a0;
- (void)dealloc;
- (id)_initWithCookie:(id)a0 partition:(id)a1;
- (struct HTTPCookie { void /* function */ **x0; } *)_inner;
- (id)_initWithCookie:(id)a0 partition:(id)a1 accessTime:(double)a2;
- (id)init;
- (id)_initWithProperties:(id)a0 fromString:(BOOL)a1;

@end
