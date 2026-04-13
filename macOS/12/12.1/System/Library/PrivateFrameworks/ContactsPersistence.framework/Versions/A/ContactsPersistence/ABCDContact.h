@interface ABCDContact : CNCDContact

- (id)nameWithFormatter:(id)a0 rangeOfSortingSubstring:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1;
- (unsigned long long)nameOrderWithFormatter:(id)a0;
- (id)companyNameWithFormatter:(id)a0;
- (id)firstNameWithFormatter:(id)a0;
- (id)middleNameWithFormatter:(id)a0;
- (id)lastNameWithFormatter:(id)a0;
- (id)nameDelimiter;
- (id)_firstAvailableValueForRelationship:(id)a0 key:(id)a1;
- (id)joinedName;

@end
