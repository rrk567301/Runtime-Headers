@interface LPStaticAPFSPhysicalStore : LPStaticMedia

+ (id)supportedContentTypes;

- (id)parent;
- (int)role;
- (id)container;

@end
