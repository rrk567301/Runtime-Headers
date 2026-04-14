@class NSString;

@interface OSAOsLogPackParser : NSObject

@property (copy) id /* block */ pointerPointsToSafeMemory;
@property (copy) id /* block */ modulePathForMemoryPointer;
@property (copy) id /* block */ readCStringFromTarget;
@property (copy) NSString *formatString;
@property BOOL formatStringIsSafe;
@property (copy) NSString *formatStringOriginatingModulePath;
@property (readonly, nonatomic) unsigned long long maxNumArguments;

- (void).cxx_destruct;
- (id)parse:(id)a0;
- (id)compose:(id)a0;
- (id)extractArguments:(id)a0;
- (id)filterOutSensitiveParts:(id)a0 withFormats:(id)a1;
- (id)initWithMaxNumAruments:(unsigned long long)a0;

@end
