@class AIMLISEventFilter, AIMLISStreamsProvider, NSError;

@interface AIMLISStreamsFactory : NSObject

+ (void)constructWithFilter:(AIMLISEventFilter *)a0 startTime:(double)a1 endTime:(double)a2 maxEvents:(long long)a3 lastN:(long long)a4 completionHandler:(void (^)(AIMLISStreamsProvider *, NSError *))a5;
+ (void)constructWithFilter:(AIMLISEventFilter *)a0 startTimeRelativeToNow:(double)a1 completionHandler:(void (^)(AIMLISStreamsProvider *, NSError *))a2;

- (id)init;

@end
