@interface _GEOInternalResourceManifestUpdateAssertionRecord : _GEOResourceManifestUpdateAssertionRecord

- (BOOL)isExpired;
- (id)description;
- (id)initWithReason:(id)a0;
- (id)initWithProcess:(id)a0 reason:(id)a1 creationTimestamp:(double)a2;

@end
