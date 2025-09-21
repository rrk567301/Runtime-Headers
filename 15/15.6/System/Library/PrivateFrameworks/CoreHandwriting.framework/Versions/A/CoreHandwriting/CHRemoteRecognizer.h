@class NSString, NSXPCConnection;

@interface CHRemoteRecognizer : NSObject <CHRecognizing> {
    NSXPCConnection *__connection;
}

@property (nonatomic) long long priority;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double width; double height; } minimumDrawingSize;
@property (readonly, nonatomic) char enableCachingIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)absoluteMaxStrokeCountPerRequest;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)connection;
- (id)initWithEnableCachingIfAvailable:(char)a0;
- (char)isEqualToRemoteRecognizer:(id)a0;
- (void)logDrawingsAndResultsForRequest:(id)a0 result:(id)a1 error:(id)a2;
- (void)setupXPCConnectionIfNeeded;

@end
