@class NSString, NSDictionary, NSData, NSArray;
@protocol UVCDeviceControlDelegate;

@interface UVCDeviceControl : NSObject {
    id<UVCDeviceControlDelegate> _delegate;
    unsigned long long _selector;
    int _type;
    unsigned char _bRequestSupported;
    unsigned char _entityID;
    struct { unsigned char supportGetValue : 1; unsigned char supportSetValue : 1; unsigned char disableDueToAutoMode : 1; unsigned char autoUpdate : 1; unsigned char aynchronous : 1; unsigned char disabledDueToState : 1; unsigned char reserved : 2; } _info;
    NSDictionary *_attributes;
    NSString *_name;
    unsigned long long _currentValueSize;
    NSArray *_autoControls;
    NSData *_cachedValue;
}

@property (readonly) NSData *currentValue;
@property (readonly) unsigned long long currentValueSize;
@property (retain) NSData *info;
@property (readonly) NSString *name;
@property (readonly) NSDictionary *attributes;

- (unsigned long long)selector;
- (id)description;
- (id)debugDescription;
- (id)delegate;
- (void).cxx_destruct;
- (int)type;
- (unsigned long long)entityID;
- (BOOL)setCurrentValue:(id)a0 error:(id *)a1;
- (void)setAutoControls:(id)a0;
- (id)initWithAttributes:(struct { unsigned short x0; unsigned char x1; unsigned char x2; unsigned char x3; } *)a0 type:(int)a1 entityID:(unsigned long long)a2 delegate:(id)a3;
- (id)parseControl;
- (void)handleInterruptData:(id)a0 attributes:(unsigned char)a1;
- (BOOL)setControlInfo:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 2; })a0 error:(id *)a1;
- (id)autoControls;

@end
