@class NSString, NSArray, NSMutableArray;

@interface TCMessageEntry : NSObject {
    int m_tag;
    NSString *m_text;
    NSArray *m_parameters;
    NSMutableArray *m_affectedObjects;
    int m_count;
}

@property (copy, nonatomic) NSString *additionalText;
@property (nonatomic) unsigned long long timeStamp;

+ (void)initialize;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)affectedObjects;
- (void)addAffectedObject:(id)a0;
- (id)getAdditionalText;
- (int)getCount;
- (int)getMessageTag;
- (id)getMessageText;
- (id)getParameter:(unsigned int)a0;
- (unsigned long long)getParameterCount;
- (id)initWithTag:(int)a0 affectedObject:(id)a1 text:(id)a2 parameters:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a3;
- (void)mergeEntries:(id)a0;
- (long long)timeStampCompare:(id)a0;

@end
