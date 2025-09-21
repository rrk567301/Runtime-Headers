@class NSString, NSMutableString;

@interface ICSStringWriter : NSObject <ICSAppendable> {
    NSMutableString *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendString:(id)a0;
- (void)appendFormat:(id)a0;
- (id)result;
- (id)init;
- (id)initWithString:(id)a0;
- (id)mutableResult;
- (void).cxx_destruct;

@end
