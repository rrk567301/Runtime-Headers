@class NSString, NSMutableDictionary;

@interface MSPSharedTripVirtualContact : MSPSharedTripContact {
    NSString *_virtualReceiverHandle;
    NSString *_virtualReceiverName;
    NSMutableDictionary *_deviceHandlesByVersion;
}

- (id)contact;
- (id)labeledValue;
- (id)displayName;
- (void).cxx_destruct;
- (BOOL)isPhoneNumber;
- (id)stringValue;
- (id)_deviceHandleForVersion:(unsigned long long)a0;
- (id)handleForIDS;
- (id)initWithVirtualReceiverHandle:(id)a0;

@end
