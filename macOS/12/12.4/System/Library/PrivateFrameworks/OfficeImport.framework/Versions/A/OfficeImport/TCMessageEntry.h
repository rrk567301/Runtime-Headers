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

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)affectedObjects;
- (void)mergeEntries:(id)a0;
- (id)initWithTag:(int)a0 affectedObject:(id)a1 text:(id)a2 parameters:(char *)a3;
- (void)addAffectedObject:(id)a0;
- (long long)timeStampCompare:(id)a0;
- (id)getMessageText;
- (int)getMessageTag;
- (id)getAdditionalText;
- (int)getCount;
- (unsigned long long)getParameterCount;
- (id)getParameter:(unsigned int)a0;

@end
