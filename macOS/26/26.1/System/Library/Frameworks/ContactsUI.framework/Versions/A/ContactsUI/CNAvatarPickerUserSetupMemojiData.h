@class NSArray, NSString, NSData;

@interface CNAvatarPickerUserSetupMemojiData : NSObject

@property (retain, nonatomic) NSArray *avatarRecordsDataArray;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) NSData *avatarRecordsData;

+ (id)log;

- (void).cxx_destruct;
- (id)init;
- (void)updateAvatarRecordsData:(id)a0;

@end
