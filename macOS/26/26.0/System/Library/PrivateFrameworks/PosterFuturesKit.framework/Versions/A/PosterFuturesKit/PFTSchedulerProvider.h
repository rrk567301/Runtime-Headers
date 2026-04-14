@class NSString;
@protocol PFTSchedulerProvider, PFTScheduler;

@interface PFTSchedulerProvider : NSObject <PFTSchedulerProvider>

@property (class, readonly, nonatomic) id<PFTSchedulerProvider> defaultProvider;

@property (readonly, copy, nonatomic) id /* block */ serialSchedulerProvider;
@property (readonly, copy, nonatomic) id /* block */ synchronousSerialSchedulerProvider;
@property (readonly, copy, nonatomic) id /* block */ readerWriterSchedulerProvider;
@property (readonly, nonatomic) id<PFTScheduler> backgroundScheduler;
@property (readonly, nonatomic) id<PFTScheduler> mainThreadScheduler;
@property (readonly, nonatomic) id<PFTScheduler> inlineScheduler;
@property (readonly, nonatomic) id<PFTScheduler> immediateScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)providerWithBackgroundConcurrencyLimit:(long long)a0;
+ (id)makeDefaultProvider;

- (id)backgroundSchedulerWithQualityOfService:(unsigned long long)a0;
- (id)initWithBackgroundScheduler:(id)a0 mainThreadScheduler:(id)a1 immediateScheduler:(id)a2 serialSchedulerProvider:(id /* block */)a3 synchronousSerialSchedulerProvider:(id /* block */)a4 readerWriterSchedulerProvider:(id /* block */)a5;
- (id)newSynchronousSerialSchedulerWithName:(id)a0;
- (id)newReaderWriterSchedulerWithName:(id)a0;
- (void).cxx_destruct;
- (id)newSerialSchedulerWithName:(id)a0;
- (id)initWithBackgroundScheduler:(id)a0 mainThreadScheduler:(id)a1 inlineScheduler:(id)a2 immediateScheduler:(id)a3 serialSchedulerProvider:(id /* block */)a4 synchronousSerialSchedulerProvider:(id /* block */)a5 readerWriterSchedulerProvider:(id /* block */)a6;

@end
