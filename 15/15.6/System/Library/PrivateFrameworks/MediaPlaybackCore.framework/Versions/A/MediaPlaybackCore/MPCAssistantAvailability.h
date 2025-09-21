@interface MPCAssistantAvailability : NSObject

- (void)assistantRadioGetAvailability:(id /* block */)a0;
- (void)assistantRadioGetAvailability:(struct { char x0; char x1; char x2; char x3; })a0 completion:(id /* block */)a1;
- (long long)assistantStreamingGetAvailability;
- (long long)assistantStreamingGetAvailability:(struct { char x0; char x1; char x2; char x3; })a0;

@end
