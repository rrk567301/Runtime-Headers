@class NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface WFObservableResult : NSObject

@property (readonly, nonatomic) Class valueType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } glyphSize;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerNotificationQueue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (nonatomic) char observingDistributedNotifications;

+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)a0 glyphSize:(struct CGSize { double x0; double x1; })a1;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (void)drawGlyphsIntoWorkflowsIfNecessary:(id)a0 glyphSize:(struct CGSize { double x0; double x1; })a1 roundedIcon:(char)a2 synchronously:(char)a3 completion:(id /* block */)a4;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addResultObserver:(id)a0;
- (void)removeResultObserver:(id)a0;
- (void)stopConnection;
- (void)databaseDidChange:(id)a0;
- (void)handleChangeNotification:(id)a0;
- (id)initWithValueType:(Class)a0 glyphSize:(struct CGSize { double x0; double x1; })a1;
- (void)startConnectionIfNecessary;

@end
