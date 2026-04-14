@class NSString, NSNumber;

@interface IASGenmojiQueryInfo : NSObject

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSString *skinTone;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *photosUUID;
@property (retain, nonatomic) NSNumber *didPersonalize;

- (void).cxx_destruct;

@end
