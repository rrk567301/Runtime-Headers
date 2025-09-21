@class NSString, LSSSettings, NSObject;
@protocol OS_dispatch_queue, LSSProviderDelegate;

@interface LSSStationaryProvider : NSObject <LSSProvider> {
    NSObject<OS_dispatch_queue> *_queue;
    LSSSettings *_settings;
}

@property (weak, nonatomic) id<LSSProviderDelegate> delegate;
@property (nonatomic) long long features;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
