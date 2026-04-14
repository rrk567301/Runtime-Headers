@class NSData, NSString;

@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *phoneNumberData;
@property (retain, nonatomic) NSData *labelData;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)phoneNumberAtIndex:(unsigned long long)a0;
- (const char *)utf8LabelAtIndex:(unsigned long long)a0 length:(out unsigned short *)a1;

@end
