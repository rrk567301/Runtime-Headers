@interface LPAPFSPhysicalStore : LPMedia

+ (id)supportedContentTypes;

- (id)parent;
- (id)container;
- (int)role;

@end
