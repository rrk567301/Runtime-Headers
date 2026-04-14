@class NSString, NSArray;

@interface AMPLibraryAddToCloudMusicLibraryRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned long long commandID;
@property (nonatomic) unsigned long long playlistID;
@property (nonatomic) unsigned long long parentPlaylistID;
@property (nonatomic) unsigned long long curatorAdamID;
@property (nonatomic) BOOL flag;
@property (retain, nonatomic) NSString *playlistTitle;
@property (retain, nonatomic) NSString *cloudPlaylistUUID;
@property (nonatomic) unsigned long long insertAfterPosition;
@property (nonatomic) unsigned int atpusEditValue;
@property (retain, nonatomic) NSArray *adamIDs;
@property (retain, nonatomic) NSArray *itemIdentifiers;

- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
