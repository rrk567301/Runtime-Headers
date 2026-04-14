@class NSString;

@interface IMDPersistence.StorageInspector : NSObject {
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ schedulingBehavior;
}

@property (nonatomic, readonly) NSString *description;

+ (id)createFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void)runWithCompletionHandler:(id /* block */)a0;
- (id)encodeToData:(id *)a0;

@end
