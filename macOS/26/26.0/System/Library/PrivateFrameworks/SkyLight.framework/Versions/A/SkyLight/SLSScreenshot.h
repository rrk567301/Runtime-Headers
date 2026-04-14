@class SLContentFilter, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SLSScreenshot : NSObject

@property (retain, nonatomic) SLContentFilter *filter;
@property (retain, nonatomic) NSDictionary *properties;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) id /* block */ zeroWeakSelf;
@property (readonly, copy, nonatomic) id /* block */ bridgingHandler;

+ (id)convertContentStreamPropertiesToScreenshot:(id)a0;
+ (BOOL)createScreenshot:(id)a0 properties:(id)a1 queue:(id)a2 handler:(id /* block */)a3 error:(id *)a4;
+ (BOOL)replaceColorSpaceInDictionaryWithProfileID:(id)a0 forKey:(id)a1;

@end
