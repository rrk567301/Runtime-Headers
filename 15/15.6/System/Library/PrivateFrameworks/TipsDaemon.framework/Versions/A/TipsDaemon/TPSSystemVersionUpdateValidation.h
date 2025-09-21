@interface TPSSystemVersionUpdateValidation : TPSTargetingValidation

- (char)validateLastMajorSystemVersionUpdateSinceTimeInterval:(double)a0 desiredOrder:(long long)a1;
- (void)validateWithCompletion:(id /* block */)a0;

@end
