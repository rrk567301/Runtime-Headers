@class TIInputContextHistory;

@interface TCInputContextHistory : NSObject <NSSecureCoding, NSCopying> {
    TIInputContextHistory *_tiInputContextHistory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) TIInputContextHistory *tiInputContextHistory;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithTIInputContextHistory:(id)a0;
- (id)mostRecentTextEntriesWithCount:(long long)a0;

@end
