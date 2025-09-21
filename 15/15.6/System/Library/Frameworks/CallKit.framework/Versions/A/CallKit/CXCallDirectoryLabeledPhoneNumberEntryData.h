@class NSData, NSString;

@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSData *phoneNumberData;
@property (retain, nonatomic) NSData *labelData;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)phoneNumberAtIndex:(unsigned long long)a0;
- (const char *)utf8LabelAtIndex:(unsigned long long)a0 length:(out unsigned short *)a1;

@end
