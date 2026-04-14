@interface LPStaticAPFSPhysicalStore : LPStaticMedia

+ (id)supportedContentTypes;

- (id)parent;
- (id)container;
- (int)role;

@end
