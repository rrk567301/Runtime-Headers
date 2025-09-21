@class NSMutableDictionary, NSString, SFOidParser, NSDate, NSMutableArray;

@interface SFCertificateData_ivars : NSObject {
    NSMutableArray *_labels;
    NSMutableArray *_fields;
    NSMutableArray *_indent;
    unsigned long long _titleIndex;
    unsigned long long _expDateIndex;
    unsigned long long _subjectField;
    unsigned long long _issuerField;
    unsigned long long _numFields;
    char _expired;
    char _isRoot;
    char _isLeaf;
    char _trustChanged;
    struct __SecCertificate { } *_certRef;
    struct cssm_data { unsigned long long Length; char *Data; } _certData;
    long long _clHandle;
    NSMutableArray *_policies;
    NSMutableArray *_policyNames;
    NSMutableArray *_policyValues;
    NSMutableArray *_trustValues;
    unsigned int _trustDomain;
    NSMutableDictionary *_fieldIndexes;
    char _addToFieldIndexes;
    char _isCA;
    unsigned long long _sigAlgIndex;
    unsigned long long _issuerIndex;
    unsigned long long _serialIndex;
    struct __SecTrust { } *_trustRef;
    NSDate *_firstValidDate;
    NSDate *_expirationDate;
    NSString *_statusString;
    int _certStatus;
    char _parsed;
    char _parseFullCert;
    char _hasResponder;
    char _hasCRL;
    SFOidParser *_oidParser;
    unsigned long long _keyAlgId;
    unsigned long long _keySizeInBits;
}

- (void)dealloc;
- (id)oidParser;
- (void)setOidParser:(id)a0;

@end
