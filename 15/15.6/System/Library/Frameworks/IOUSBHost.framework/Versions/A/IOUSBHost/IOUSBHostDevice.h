@interface IOUSBHostDevice : IOUSBHostObject

@property unsigned long long lastKnownConfiguration;
@property (readonly) const struct IOUSBConfigurationDescriptor { unsigned char x0; unsigned char x1; unsigned short x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; } *configurationDescriptor;

+ (struct __CFDictionary { } *)createMatchingDictionaryWithVendorID:(id)a0 productID:(id)a1 bcdDevice:(id)a2 deviceClass:(id)a3 deviceSubclass:(id)a4 deviceProtocol:(id)a5 speed:(id)a6 productIDArray:(id)a7;

- (char)resetWithError:(id *)a0;
- (char)allocateDownstreamBusCurrentWithWakeUnits:(unsigned long long *)a0 sleepUnits:(unsigned long long *)a1 error:(id *)a2;
- (char)configureWithValue:(unsigned long long)a0 error:(id *)a1;
- (char)configureWithValue:(unsigned long long)a0 matchInterfaces:(char)a1 error:(id *)a2;

@end
