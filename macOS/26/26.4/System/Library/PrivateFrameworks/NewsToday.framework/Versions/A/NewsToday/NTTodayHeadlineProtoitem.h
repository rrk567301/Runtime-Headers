@class NSURL, NSString;
@protocol FCHeadlineProviding;

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem>

@property (readonly, copy, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)itemWithContentContext:(id)a0 operationInfo:(id)a1 sectionDescriptor:(id)a2 todayData:(id)a3 assetFileURLsByRemoteURL:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 headline:(id)a1 actionURL:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)assetHandlesWithOperationInfo:(id)a0;

@end
