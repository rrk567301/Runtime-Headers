@class NSArray, NSObject;
@protocol OS_dispatch_data;

@interface EDPreviouslyDownloadedMessageData : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *headersOnlyData;
@property (readonly, nonatomic) NSObject<OS_dispatch_data> *partialMessageData;
@property (readonly, nonatomic) char hasFullMessageData;
@property (readonly, nonatomic) char hasPartialMessageData;
@property (readonly, nonatomic) NSArray *mimeParts;

- (void).cxx_destruct;
- (id)initWithHeadersOnlyData:(id)a0 partialMessageData:(id)a1 hasFullMessageData:(char)a2 hasPartialMessageData:(char)a3 mimeParts:(id)a4;

@end
