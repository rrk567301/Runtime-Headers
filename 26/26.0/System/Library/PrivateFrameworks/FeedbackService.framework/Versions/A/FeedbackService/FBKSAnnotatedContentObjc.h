@class NSData, NSString, NSDictionary;

@interface FBKSAnnotatedContentObjc : NSObject

@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *_description;
@property (retain, nonatomic) NSString *iconType;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSDictionary *additionalInfo;

- (void).cxx_destruct;
- (id)initWithPayload:(id)a0 displayName:(id)a1 description:(id)a2 fileName:(id)a3 iconType:(id)a4 additionalInfo:(id)a5;

@end
