@class NSArray;

@interface VZVirtualMachineStartOptions : NSObject {
    NSArray *_delegatedExceptionClasses;
}

@property (copy, setter=_setDelegatedExceptionClasses:) NSArray *_delegatedExceptionClasses;
@property (readonly) struct StartOptions { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } _startOptions;

- (id)init;
- (void).cxx_destruct;

@end
