@class NSArray;

@interface TVRCPINEntryAttributes : NSObject <NSSecureCoding> {
    NSArray *_groupLengths;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long totalDigitCount;
@property (readonly, nonatomic) unsigned long long numberOfDigitGroups;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDigitCount:(unsigned long long)a0;
- (id)initWithGroupLengths:(id)a0;
- (unsigned long long)numberOfDigitsInGroup:(unsigned long long)a0;

@end
