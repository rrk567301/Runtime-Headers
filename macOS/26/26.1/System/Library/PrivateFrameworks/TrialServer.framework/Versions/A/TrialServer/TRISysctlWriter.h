@class NSString;

@interface TRISysctlWriter : NSObject <TRISysctlWriting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)writeSysctlWithName:(id)a0 intValue:(long long)a1;

@end
