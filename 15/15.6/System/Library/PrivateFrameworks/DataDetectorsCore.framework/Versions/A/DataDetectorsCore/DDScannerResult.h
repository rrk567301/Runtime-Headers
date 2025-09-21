@class NSString, NSURL, NSArray;

@interface DDScannerResult : NSObject <NSSecureCoding> {
    struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *_coreResult;
    NSArray *_subResultsCache;
    NSURL *_cachedURL;
    char _hasCachedURL;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *value;
@property (readonly, nonatomic) NSString *matchedString;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } urlificationRange;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int category;
@property (readonly, nonatomic) NSURL *url;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } range;

+ (id)resultFromCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
+ (struct __CFArray { } *)coreResultsFromResults:(id)a0;
+ (id)filterResults:(id)a0 forTypes:(unsigned long long)a1 referenceDate:(id)a2 referenceTimeZone:(id)a3;
+ (id)resultFromText:(id)a0 personName:(id)a1 jobTitle:(id)a2 department:(id)a3 company:(id)a4;
+ (id)resultsFromCoreResults:(struct __CFArray { } *)a0;
+ (id)scannerResultFromXML:(id)a0;
+ (id)scannerResultFromXML:(id)a0 stringToScan:(id)a1;
+ (id /* block */)shouldUrlifyBlockForTypes:(unsigned long long)a0;
+ (id)verboseXMLDescriptionFromElements:(id)a0 stringToScan:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)coreResult;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setType:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (id)location;
- (long long)score;
- (id)element;
- (id)_initWithWebKitPropertyListData:(id)a0;
- (id)_webKitPropertyListData;
- (id)detailedDescription;
- (id)rawValue;
- (struct { long long x0; long long x1; })cfRange;
- (id)_initWithPlist:(id)a0;
- (char)typeIs:(struct __CFString { } *)a0;
- (id)XMLDescription;
- (void)_addText:(id)a0 currentPos:(struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; })a1 newPos:(struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; })a2 offset:(struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; })a3 query:(struct __DDScanQuery { } *)a4;
- (id)contextualData;
- (id)dateFromReferenceDate:(id)a0 referenceTimezone:(id)a1 timezoneRef:(id *)a2 allDayRef:(char *)a3;
- (id)elementWithQuery:(struct __DDScanQuery { } *)a0 include:(int)a1;
- (char)extractStartDate:(id *)a0 startTimezone:(id *)a1 endDate:(id *)a2 endTimezone:(id *)a3 allDayRef:(char *)a4 referenceDate:(id)a5 referenceTimezone:(id)a6;
- (double)getDuration;
- (char)getFlightNumber:(id *)a0 airline:(id *)a1;
- (char)getIMScreenNameValue:(id *)a0 type:(id *)a1;
- (char)getMailValue:(id *)a0 label:(id *)a1;
- (char)getMoneyAmount:(double *)a0 currency:(id *)a1;
- (char)getPhoneValue:(id *)a0 label:(id *)a1;
- (char)getPhysicalUnitValue:(double *)a0 unit:(id *)a1;
- (char)getStreet:(id *)a0 city:(id *)a1 state:(id *)a2 zip:(id *)a3 country:(id *)a4;
- (char)getTrackingNumber:(id *)a0 carrier:(id *)a1;
- (id)initWithCoreResult:(struct __DDResult { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __DDQueryRange { struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x0; struct __DDQueryOffset { unsigned short x0 : 16; unsigned short x1 : 16; unsigned int x2 : 32; } x1; } x1; struct { long long x0; long long x1; } x2; long long x3; struct __CFArray *x4; struct __CFString *x5; struct __CFString *x6; void *x7; struct __CFDictionary *x8; long long x9; unsigned char x10; float x11; } *)a0;
- (void)offsetRangeBy:(long long)a0;
- (void)setSubResults:(id)a0;
- (id)subResults;
- (id)verboseElement;

@end
