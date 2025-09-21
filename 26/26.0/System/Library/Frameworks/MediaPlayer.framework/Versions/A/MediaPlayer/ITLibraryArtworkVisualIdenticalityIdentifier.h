@class NSString;

@interface ITLibraryArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality>

@property (readonly, nonatomic) long long artworkType;
@property (readonly, nonatomic) unsigned long long libraryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithArtworkType:(long long)a0 libraryID:(unsigned long long)a1;

@end
