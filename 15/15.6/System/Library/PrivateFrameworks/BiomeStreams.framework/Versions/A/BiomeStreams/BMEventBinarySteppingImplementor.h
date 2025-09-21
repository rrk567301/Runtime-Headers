@class NSString;

@interface BMEventBinarySteppingImplementor : BMEventBase <BMEventBinaryStepping>

@property (nonatomic, getter=isStarting) char starting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isCompleteWithContext:(id)a0 error:(id *)a1;
- (char)isValidWithContext:(id)a0 error:(id *)a1;

@end
