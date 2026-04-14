@interface LPStaticAPFSPhysicalStore : LPStaticMedia

+ (id)supportedContentTypes;

- (int)role;
- (id)parent;
- (id)container;

@end
