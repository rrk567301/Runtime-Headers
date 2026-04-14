@class NSString, NSMutableString;

@interface ICSStringWriter : NSObject <ICSAppendable> {
    NSMutableString *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendFormat:(id)a0;
- (void)appendString:(id)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)mutableResult;
- (id)init;
- (id)result;

@end
