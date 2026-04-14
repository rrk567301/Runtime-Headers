@class NSString;

@interface MCAction : MCObjectLight {
    unsigned int _flags;
}

@property (copy) NSString *targetObjectID;
@property (nonatomic) BOOL tracksInParent;

- (id)description;
- (id)snapshot;
- (BOOL)isSnapshot;
- (id)xmlElement;
- (id)imprint;
- (id)initWithImprint:(id)a0;
- (void)demolish;
- (void)_copySelfToSnapshot:(id)a0;

@end
