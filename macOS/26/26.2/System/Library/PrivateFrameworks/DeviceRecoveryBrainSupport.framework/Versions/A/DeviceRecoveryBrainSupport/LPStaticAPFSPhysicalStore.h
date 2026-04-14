@interface LPStaticAPFSPhysicalStore : LPStaticMedia

+ (id)supportedContentTypes;

- (id)container;
- (id)parent;
- (int)role;

@end
