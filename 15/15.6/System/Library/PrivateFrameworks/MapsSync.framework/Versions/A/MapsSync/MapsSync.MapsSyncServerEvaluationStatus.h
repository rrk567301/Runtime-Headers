@class NSString;

@interface MapsSync.MapsSyncServerEvaluationStatus : MapsSync.MapsSyncBaseItem {
    void /* unknown type, empty encoding */ _arpStatus;
    void /* unknown type, empty encoding */ _rapStatus;
}

@property (nonatomic, readonly) char arpStatus;
@property (nonatomic, readonly) char rapStatus;
@property (nonatomic, readonly) NSString *description;

- (char)isEqual:(id)a0;
- (id)initWithObject:(id)a0;
- (Class)managedObjectClass;
- (void)addEditWithBlock:(id /* block */)a0;
- (Class)mutableObjectClass;
- (void)setPropertiesWithObject:(id)a0;

@end
