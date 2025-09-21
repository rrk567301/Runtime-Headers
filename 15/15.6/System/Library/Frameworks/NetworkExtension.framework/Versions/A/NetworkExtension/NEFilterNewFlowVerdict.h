@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property char filterInbound;
@property char filterOutbound;
@property unsigned long long peekInboundBytes;
@property unsigned long long peekOutboundBytes;
@property long long statisticsReportFrequency;

+ (id)URLAppendStringVerdictWithMapKey:(id)a0;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)filterDataVerdictWithFilterInbound:(char)a0 peekInboundBytes:(unsigned long long)a1 filterOutbound:(char)a2 peekOutboundBytes:(unsigned long long)a3;
+ (id)needRulesVerdict;
+ (id)pauseVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)a0 remediationButtonTextMapKey:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (long long)filterAction;

@end
