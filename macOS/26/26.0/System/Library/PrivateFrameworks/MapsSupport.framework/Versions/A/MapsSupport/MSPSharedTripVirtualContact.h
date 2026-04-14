@class NSString, NSMutableDictionary;

@interface MSPSharedTripVirtualContact : MSPSharedTripContact {
    NSString *_virtualReceiverHandle;
    NSString *_virtualReceiverName;
    NSMutableDictionary *_deviceHandlesByVersion;
}

- (id)contact;
- (id)displayName;
- (id)stringValue;
- (BOOL)isPhoneNumber;
- (void).cxx_destruct;
- (id)labeledValue;
- (id)_deviceHandleForVersion:(unsigned long long)a0;
- (id)handleForIDS;
- (id)initWithVirtualReceiverHandle:(id)a0;

@end
