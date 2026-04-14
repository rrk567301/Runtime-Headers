@class NSURL, NWPathEvaluator, NSObject;
@protocol OS_dispatch_queue;

@interface MADAutoAssetConnectorObserver : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSURL *pathToServer;
@property (retain, nonatomic) NWPathEvaluator *pathEvaluator;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *pathStatusDispatchQueue;
@property (nonatomic) BOOL pathToServerIsUp;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)summary;
- (id)initForServerPath:(id)a0;

@end
