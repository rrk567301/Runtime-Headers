@class NSString, SFUDataRepresentation;

@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation> {
    long long _identifier;
    NSString *_fileStateIdentifier;
    SFUDataRepresentation *_objectData;
    void *_ownedIds;
}

@property (copy, nonatomic) NSString *relativeDataPath;
@property (nonatomic) int classType;
@property (nonatomic) unsigned int version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)identifier;
- (id)initWithIdentifier:(long long)a0;
- (id)dataRepresentation;
- (char)isLoaded;
- (id)fileStateIdentifier;
- (const void *)ownedIds;
- (char)setDataRepresentation:(id)a0 shouldCopy:(char)a1 error:(id *)a2;
- (void)setFileStateIdentifier:(id)a0;
- (void)setOwnedIds:(const void *)a0;

@end
