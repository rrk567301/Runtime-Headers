@class NSData, NSString;
@protocol VIImageContent;

@interface VIUserFeedback : NSObject <NSCopying>

@property (readonly, nonatomic) id<VIImageContent> image;
@property (readonly, copy, nonatomic) NSData *userFeedbackPayload;
@property (readonly, copy, nonatomic) NSString *reportIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 payload:(id)a1 reportIdentifier:(id)a2;

@end
